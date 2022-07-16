//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOXPCSerializable-Protocol.h>

@class NSData, NSString, NSURL;

@interface GEOTileData : NSObject <GEOXPCSerializable>
{
    NSData *_data;	// 8 = 0x8
    NSURL *_fileURL;	// 16 = 0x10
    unsigned long long _cachedFileSize;	// 24 = 0x18
    long long _sandboxExtension;	// 32 = 0x20
    id _decodedRepresentation;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000a01863
@property(readonly, nonatomic) id decodedRepresentation; // @synthesize decodedRepresentation=_decodedRepresentation;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a01782
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long length;
- (id)readDataWithError:(id *)arg1;	// IMP=0x0000000000a01647
- (void)_replaceFileURL:(id)arg1;	// IMP=0x0000000000a015af
- (void)encodeToXPCDictionary:(id)arg1;	// IMP=0x0000000000a0139b
- (void)dealloc;	// IMP=0x0000000000a0135b
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000a010be
- (id)initWithDecodedRepresentation:(id)arg1;	// IMP=0x0000000000a01038
- (id)initWithFileURL:(id)arg1;	// IMP=0x0000000000a00eba
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a00e34
- (id)init;	// IMP=0x0000000000a00e0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

