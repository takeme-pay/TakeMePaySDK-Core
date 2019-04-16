//
//  TMPPaymentEnums.h
//  TakeMePaySDK
//
//  Created by tianren.zhu on 2019/1/15.
//  Copyright © 2019 JapanFoodie. All rights reserved.
//

#ifndef TMPPaymentEnums_h
#define TMPPaymentEnums_h

typedef NS_ENUM(NSInteger, TMPPaymentRequestState) {
    TMPPaymentRequestStateUnknown = 0,
    TMPPaymentRequestStateIdle,
    TMPPaymentRequestStateInProgress,
    TMPPaymentRequestStateSuccess,
    TMPPaymentRequestStateFailure,
    TMPPaymentRequestStateCanceled
};

#endif /* TMPPaymentEnums_h */
