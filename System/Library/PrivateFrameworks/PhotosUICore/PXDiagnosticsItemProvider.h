//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PXDiagnosticsItemProvider : NSObject
{
    NSMutableDictionary *__loadHandlers;	// 8 = 0x8
}

+ (id)providerWithItem:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000008ff6dc
- (void).cxx_destruct;	// IMP=0x00000000008ff6be
@property(readonly, nonatomic) NSMutableDictionary *_loadHandlers; // @synthesize _loadHandlers=__loadHandlers;
- (void)registerItem:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000008ff61c
@property(readonly, nonatomic) NSSet *registeredIdentifiers;
- (id)itemForIdentifier:(id)arg1;	// IMP=0x00000000008ff4f7
- (_Bool)hasItemForIdentifier:(id)arg1;	// IMP=0x00000000008ff46d
- (void)registerItemForIdentifier:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000008ff3de
- (id)init;	// IMP=0x00000000008ff378

@end

