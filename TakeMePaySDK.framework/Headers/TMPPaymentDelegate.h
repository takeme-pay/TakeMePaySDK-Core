//
//  TMPPaymentDelegate.h
//  TakeMePaySDK
//
//  Created by tianren.zhu on 2018/12/17.
//  Copyright © 2018 JapanFoodie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TMPPaymentEnums.h"

@class TMPPayment, TMPSource, TMPSourceParams;

/**
 Provides necessary and detailed information for payment progress delegate, all methods are optional, when you init TMPPayment instance, you are asked to provide a delegate instance.
 All methods will be invoked on MAIN_QUEUE
 */
@protocol TMPPaymentDelegate <NSObject>

NS_ASSUME_NONNULL_BEGIN

@optional

/**
 Invoked if TMPPayment initialization failed, the reason of why initialization failed would be present.

 @param payment Associated TMPPayment instance.
 @param error The reason of initialization failed.
 */
- (void)payment:(TMPPayment *)payment didFailedToLoadWithError:(nonnull NSError *)error;

/**
 Invoked instantly before using the params to create the source by requesting TakeMe Pay backend.

 @param payment Associated TMPPayment instance.
 @param params The final ( will be used for requesting very soon ) params.
 */
- (void)payment:(TMPPayment *)payment willCreateSourceByUsing:(TMPSourceParams *)params;

/**
 Invoked when request TakeMe Pay backend completed, the source would be present if the create process was successful, or the error would be present.

 @param payment Associated TMPPayment instance.
 @param source The source created by the params, is nil if process failed.
 @param error The error of source create process, is nil if process successful.
 */
- (void)payment:(TMPPayment *)payment didCreateSource:(nullable TMPSource *)source error:(nullable NSError *)error;

/**
 Invoked when TMPPayment received the source types of current merchant, the useful information will pass to delegate.

 @param payment Associated TMPPayment instance.

 @param sourceTypes Available source types of the associated merchant.
 @param selectedSourceType Current selected ( default ) source type of the associated merchant.
 @param error Error is present if receive source types process failed.
 */
- (void)payment:(TMPPayment *)payment didReceivedSourceTypes:(nullable NSArray<NSString *> *)sourceTypes selectedSourceType:(nullable NSString *)selectedSourceType error:(nullable NSError *)error;

/**
 Tell delegates the payment will finish soon, this moment the payment has done, the plugins like sourceParamsPreparer could use this method to clean the state.

 @param payment Associated TMPPayment instance.
 @param state Result state of current payment.
 @param userInfo Extra information, for extensible abilities in the future.
 */
- (void)payment:(TMPPayment *)payment willFinishWithState:(TMPPaymentRequestState)state userInfo:(nullable NSDictionary *)userInfo;

/**
 Invoked when the whole payment process finished.

 @param payment Associated TMPPayment instance.
 @param state Result state of current payment.
 @param userInfo Extra information, for extensible abilities in the future.
 */
- (void)payment:(TMPPayment *)payment didFinishWithState:(TMPPaymentRequestState)state userInfo:(nullable NSDictionary *)userInfo;

NS_ASSUME_NONNULL_END

@end
