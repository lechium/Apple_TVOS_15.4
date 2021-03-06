//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSFinancePerformable-Protocol.h>

@class AMSURLTaskInfo, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinanceDelegateAuthenticateChallengeResponse : NSObject <AMSFinancePerformable>
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
    AMSURLTaskInfo *_taskInfo;	// 16 = 0x10
}

+ (_Bool)isDelegateAuthChallengeForTaskInfo:(id)arg1;	// IMP=0x0000000000133971
- (void).cxx_destruct;	// IMP=0x0000000000133c9b
@property(retain, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (id)performWithTaskInfo:(id)arg1;	// IMP=0x0000000000133b41
- (id)initWithResponseDictionary:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00000000001338d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

