//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

@interface _SBSDisplayIdentifiersCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSSet *_displayIdentifiers;	// 16 = 0x10
    int _changedToken;	// 24 = 0x18
    CDUnknownBlockType _changedBlock;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000003bb38
- (void).cxx_destruct;	// IMP=0x000000000003c0e3
- (void)_queue_noteChanged;	// IMP=0x000000000003bfee
- (void)registerChangedBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003bf2f
- (id)displayIdentifiers;	// IMP=0x000000000003bd27
- (void)dealloc;	// IMP=0x000000000003bcee
- (id)init;	// IMP=0x000000000003bbbd

@end

