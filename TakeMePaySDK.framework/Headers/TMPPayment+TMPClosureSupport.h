//
//  TMPPayment+TMPClosureSupport.h
//  TakeMePaySDK
//
//  Created by tianren.zhu on 2019/5/14.
//  Copyright © 2019 JapanFoodie. All rights reserved.
//

#import <TakeMePaySDK/TakeMePaySDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface TMPPayment (TMPClosureSupport)

- (instancetype)setDidFailedToLoadWithErrorBlock:(void(^)(TMPPayment *payment, NSError * __nullable error))didFailedToLoadWithError;
- (instancetype)setWillCreateSourceByUsingBlock:(void(^)(TMPPayment *payment, TMPSourceParams *params))willCreateSourceByUsing;
- (instancetype)setDidCreateSourceBlock:(void(^)(TMPSource * __nullable source, NSError * __nullable error))didCreateSource;
- (instancetype)setDidReceivedSourceTypesBlock:(void(^)(TMPPayment *payment, NSArray<NSString *> * __nullable sourceTypes, NSString * __nullable selectedSourceType, NSError * __nullable error))didReceivedSourceTypes;
- (instancetype)setWillFinishWithStateBlock:(void(^)(TMPPayment *payment, TMPPaymentRequestState state, NSDictionary * __nullable userInfo))willFinishWithState;
- (instancetype)setDidFinishWithStateBlock:(void(^)(TMPPayment *payment, TMPPaymentRequestState state, NSDictionary * __nullable userInfo))didFinishWithState;

@end

NS_ASSUME_NONNULL_END
