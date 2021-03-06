//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMCContext, NSMutableArray;

@interface HMCContextProvider : HMFObject
{
    HMCContext *_context;	// 8 = 0x8
    NSMutableArray *_redirections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000096ce2b
@property(readonly) NSMutableArray *redirections; // @synthesize redirections=_redirections;
- (void)kickClient;	// IMP=0x000000000096cdab
- (void)removeAllRegistrations;	// IMP=0x000000000096cd23
- (void)registerForChangesOfDatabaseModels:(id)arg1 orWithModelIDs:(id)arg2 changeMask:(unsigned long long)arg3 selector:(SEL)arg4;	// IMP=0x000000000096cbc2
- (id)futureInContext:(CDUnknownBlockType)arg1;	// IMP=0x000000000096cada
- (void)unsafeSynchronousBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000096ca0a
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000096c93e
@property(readonly) HMCContext *context; // @synthesize context=_context;
- (id)initWithContext:(id)arg1;	// IMP=0x000000000096c88a

@end

