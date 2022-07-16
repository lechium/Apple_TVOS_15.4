//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLAssetResolver-Protocol.h>

@class NSData, NSMutableDictionary, NSString, NSURL;

@interface MDLArchiveAssetResolver : NSObject <MDLAssetResolver>
{
    NSURL *_archiveURL;	// 8 = 0x8
    NSMutableDictionary *_archiveDictionary;	// 16 = 0x10
    NSString *_rootUSDPath;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003049ec
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)removeAssetNamed:(id)arg1;	// IMP=0x0000000000304950
- (id)assetNamesInArchive;	// IMP=0x00000000003047fc
- (id)resolveInsideArchiveWithAssetNamed:(id)arg1;	// IMP=0x00000000003047d6
- (id)resolveAssetNamed:(id)arg1;	// IMP=0x0000000000304674
- (void)addResolvedAssetNamed:(id)arg1 offset:(unsigned long long)arg2 fileSize:(unsigned long long)arg3;	// IMP=0x0000000000304508
- (_Bool)canResolveAssetNamed:(id)arg1;	// IMP=0x00000000003044d1
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000304405

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
