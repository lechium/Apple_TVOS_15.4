//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationNonceStateParam
{
    NSData *_credential;	// 8 = 0x8
    PKAuthenticatorEvaluationResponse *_evaluationResponse;	// 16 = 0x10
}

+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;	// IMP=0x00000000002f7649
+ (id)paramWithCredential:(id)arg1;	// IMP=0x00000000002f75db
- (void).cxx_destruct;	// IMP=0x00000000002f7796
@property(retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse; // @synthesize evaluationResponse=_evaluationResponse;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (id)description;	// IMP=0x00000000002f76b7

@end
