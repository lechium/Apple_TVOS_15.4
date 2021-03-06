//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthentication/LAContextClientEvaluationProt-Protocol.h>
#import <LocalAuthentication/LAContextEventFeedbackProt-Protocol.h>
#import <LocalAuthentication/LAContextExternalizationProt-Protocol.h>
#import <LocalAuthentication/LAContextPropertiesProt-Protocol.h>

@class NSData;

@protocol LAContextXPC <LAContextExternalizationProt, LAContextPropertiesProt, LAContextClientEvaluationProt, LAContextEventFeedbackProt>
- (void)tokenForTransferToUnknownProcess:(void (^)(NSData *, NSError *))arg1;
- (void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(NSData *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end

