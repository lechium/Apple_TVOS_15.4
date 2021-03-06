//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOTileDBWriteOperation-Protocol.h>

@class GEOTileData, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _GEOTileDBAddTileOperation : NSObject <_GEOTileDBWriteOperation>
{
    struct _GEOTileKey _key;	// 8 = 0x8
    CDUnion_23a7df3d _tileSet;	// 24 = 0x18
    GEOTileData *_data;	// 32 = 0x20
    NSString *_ETag;	// 40 = 0x28
    unsigned char _reason;	// 48 = 0x30
    NSUUID *_externalResourceUUID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000302b85
@property(readonly, nonatomic) unsigned char reason; // @synthesize reason=_reason;
- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(_Bool *)arg4;	// IMP=0x0000000000302ada
- (_Bool)isSupercededByOperation:(id)arg1;	// IMP=0x0000000000302a47
- (void)performWithDB:(id)arg1;	// IMP=0x0000000000302a0d
- (_Bool)canIncreaseDataSizeInDB;	// IMP=0x0000000000302a05
@property(readonly, nonatomic) unsigned long long sizeInBytes;
@property(readonly, nonatomic) struct _GEOTileKey *key;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 tileSet:(CDUnion_23a7df3d)arg2 data:(id)arg3 ETag:(id)arg4 reason:(unsigned char)arg5 externalResourceUUID:(id)arg6;	// IMP=0x00000000003028e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

