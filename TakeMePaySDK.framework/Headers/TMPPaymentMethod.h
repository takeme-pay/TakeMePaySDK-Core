//
//  TMPPaymentMethod.h
//  TakeMePaySDK
//
//  Created by tianren.zhu on 2018/12/24.
//  Copyright © 2018 JapanFoodie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TMDictionaryConvertible.h"
#import "TMPPaymentSourceParamsProcessable.h"
#import "TMPPaymentAuthorizable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Represents a type of payment method.
 */
@interface TMPPaymentMethod : NSObject <TMDictionaryConvertible, TMPPaymentSourceParamsProcessable, TMPPaymentAuthorizable>

/**
 The type identifier of the payment method, unique.
 */
@property (nonatomic, strong, readonly) NSString *paymentMethodId;

/**
 The title of the payment method, it might be different from the `paymentMethodId` ( in usual case )
 */
@property (nonatomic, strong, readonly) NSString *title;

/**
 The icon(s) of payment method, it might be nil.
 */
@property (nonatomic, nullable, strong, readonly) NSArray<NSString *> *iconUris;

#pragma mark - unavailable

- (instancetype)init __attribute__((unavailable("Should always use the result from TMPPaymentServiceClient+TMPSourceTypeListLowLevelInfoManipulatorSupport")));

@end

NS_ASSUME_NONNULL_END
