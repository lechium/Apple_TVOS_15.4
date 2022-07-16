//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CPLForceSyncTask : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    NSArray *_scopeIdentifiers;	// 16 = 0x10
    NSString *_taskIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013a85e
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, copy, nonatomic) NSArray *scopeIdentifiers; // @synthesize scopeIdentifiers=_scopeIdentifiers;
- (id)description;	// IMP=0x000000000013a75e
- (void)cancelTask;	// IMP=0x000000000013a754
- (void)launchTask;	// IMP=0x000000000013a69b
- (id)initWithScopeIdentifiers:(id)arg1;	// IMP=0x000000000013a628

@end
