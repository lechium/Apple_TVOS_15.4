//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface GEOGloriaDB : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    struct unique_ptr<gloria::DB, std::default_delete<gloria::DB>> _db;	// 16 = 0x10
    struct TileId _rootTileId;	// 24 = 0x18
    Class _metadataClass;	// 40 = 0x28
    Class _dataClass;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x00000000003e9ad7
- (void).cxx_destruct;	// IMP=0x00000000003e9aa3
- (_Bool)unsafeEnumerateDataAtLocation:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 visitor:(CDUnknownBlockType)arg3;	// IMP=0x00000000003e9791
- (_Bool)unsafeEnumerateDataAtLocation:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 zoom:(unsigned char)arg3 visitor:(CDUnknownBlockType)arg4;	// IMP=0x00000000003e912e
- (_Bool)enumerateDataAtLocation:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 visitor:(CDUnknownBlockType)arg3;	// IMP=0x00000000003e8e1c
- (_Bool)enumerateDataAtLocation:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 zoom:(unsigned char)arg3 visitor:(CDUnknownBlockType)arg4;	// IMP=0x00000000003e8a77
- (_Bool)unsafeDataForQuadKeyNum:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e89e4
- (_Bool)unsafeDataForQuadKey:(unsigned long long)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x00000000003e89cb
- (id)dataForQuadKeyNum:(id)arg1;	// IMP=0x00000000003e895a
- (id)dataForQuadKey:(unsigned long long)arg1;	// IMP=0x00000000003e8944
- (_Bool)unsafeMetadata:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e8921
- (id)metadata;	// IMP=0x00000000003e8901
- (_Bool)_unsafeDataForQuadKey:(unsigned long long)arg1 ofType:(Class)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x00000000003e8253
- (id)_dataForQuadKey:(unsigned long long)arg1 ofType:(Class)arg2;	// IMP=0x00000000003e7cb1
- (_Bool)containsQuadKeyNum:(id)arg1;	// IMP=0x00000000003e7c49
- (_Bool)containsQuadKey:(unsigned long long)arg1;	// IMP=0x00000000003e7b47
- (id)initWithFileURL:(id)arg1 rootQuadKey:(unsigned long long)arg2 metadataClass:(Class)arg3 dataClass:(Class)arg4 log:(id)arg5;	// IMP=0x00000000003e7385
- (id)initWithFileURL:(id)arg1 rootQuadKey:(unsigned long long)arg2 log:(id)arg3;	// IMP=0x00000000003e7360

@end

