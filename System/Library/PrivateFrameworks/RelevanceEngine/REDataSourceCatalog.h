//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary, NSSet, REAppIconCache, REAppNameCache, REDataSourceManager;
@protocol OS_dispatch_queue;

@interface REDataSourceCatalog : NSObject
{
    REDataSourceManager *_dataSourceManager;	// 8 = 0x8
    NSCache *_iconCache;	// 16 = 0x10
    NSMutableDictionary *_localizedNameCache;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    REAppIconCache *_appIconCache;	// 40 = 0x28
    REAppNameCache *_appNameCache;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000099b1d
- (_Bool)requiresLocationInUseAssertonForDataSourceWithIdentifier:(id)arg1;	// IMP=0x0000000000099aee
- (_Bool)wantsApplicationPrewarmForDataSourceWithIdentifier:(id)arg1;	// IMP=0x0000000000099a54
- (id)applicationIdentifierForDataSourceWithIdentifier:(id)arg1;	// IMP=0x0000000000099a25
- (CDStruct_2ec95fd7)minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;	// IMP=0x00000000000999ea
- (id)localizedNameForDataSourceWithIdentifier:(id)arg1;	// IMP=0x00000000000998c4
- (id)localizedNameForApplicationWithIdentifier:(id)arg1;	// IMP=0x0000000000099827
- (_Bool)imageForDataSourceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000099538
- (void)imageForApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000993eb
- (id)localAndRemoteAppIdentifiersForDataSourceIdentifiers:(id)arg1;	// IMP=0x000000000009919c
- (void)donatedAppIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098dce
- (void)enumerateDataSources:(CDUnknownBlockType)arg1;	// IMP=0x0000000000098c8f
@property(readonly, nonatomic) NSSet *unrestrictedDataSourceIdentifiers;
@property(readonly, nonatomic) NSSet *dataSourceIdentifiers;
- (void)_applicationsStatesDidChange;	// IMP=0x0000000000098bc1
- (void)dealloc;	// IMP=0x0000000000098b4c
- (id)initWithDataSourceManager:(id)arg1;	// IMP=0x00000000000989df

@end

