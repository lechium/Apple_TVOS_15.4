//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLock, NSMutableDictionary;

@interface REAppNameCache
{
    NSMutableDictionary *_nameCache;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a680f
- (id)localizedNameForApplicationWithIdentifier:(id)arg1;	// IMP=0x00000000000a6618
- (id)_init;	// IMP=0x00000000000a6585

@end
