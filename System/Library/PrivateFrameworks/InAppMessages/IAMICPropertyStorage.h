//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InAppMessages/IAMPropertyStorage-Protocol.h>

@class ICInAppMessageManager, NSString;

@interface IAMICPropertyStorage : NSObject <IAMPropertyStorage>
{
    ICInAppMessageManager *_iTunesCloudIAMManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000014e5e
- (void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014e48
- (void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000014e32
- (id)init;	// IMP=0x0000000000014dcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

