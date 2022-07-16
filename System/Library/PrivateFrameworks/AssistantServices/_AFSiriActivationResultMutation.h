//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriActivationResultMutating-Protocol.h>

@class AFSiriActivationResult, NSError, NSString;

@interface _AFSiriActivationResultMutation : NSObject <AFSiriActivationResultMutating>
{
    AFSiriActivationResult *_baseModel;	// 8 = 0x8
    long long _actionType;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasActionType:1;
        unsigned int hasError:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000153ba9
- (id)generate;	// IMP=0x0000000000153acb
- (void)setError:(id)arg1;	// IMP=0x0000000000153aab
- (void)setActionType:(long long)arg1;	// IMP=0x0000000000153a9d
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000153a32
- (id)init;	// IMP=0x0000000000153a1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
