//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFCallSiteInfo;

@interface AFClientLite : NSObject
{
    AFCallSiteInfo *_initiationCallSiteInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009d650
- (void)handleCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009d633
- (void)handleOneWayCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009d57a
- (void)handleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 commandHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009d44b
- (void)_handleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 isOneWay:(_Bool)arg3 commandHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000009d2fd
- (void)dealloc;	// IMP=0x000000000009d248
- (id)init;	// IMP=0x000000000009cfd9

@end

