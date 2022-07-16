//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTIDSecretStore-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MTIDCompositeSecretStore : NSObject <MTIDSecretStore>
{
    NSMutableDictionary *_stores;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000036d6d
@property(retain, nonatomic) NSMutableDictionary *stores; // @synthesize stores=_stores;
- (id)debugInfo;	// IMP=0x0000000000036b51
- (void)clearLocalData;	// IMP=0x0000000000036a9d
- (id)maintainSchemes:(id)arg1 options:(id)arg2;	// IMP=0x0000000000036727
- (id)resetSchemes:(id)arg1 options:(id)arg2;	// IMP=0x00000000000363c2
- (id)secretForScheme:(id)arg1 options:(id)arg2;	// IMP=0x0000000000036325
- (id)schemesGroupedByStore:(id)arg1;	// IMP=0x0000000000036079
- (id)secretStoreForScheme:(id)arg1;	// IMP=0x0000000000035ed6
- (id)storeKeyForScheme:(id)arg1;	// IMP=0x0000000000035e04
- (id)init;	// IMP=0x0000000000035d7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

