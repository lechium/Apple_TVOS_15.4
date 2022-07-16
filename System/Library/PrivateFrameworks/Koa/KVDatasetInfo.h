//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Koa/KVJSONDecodable-Protocol.h>
#import <Koa/KVJSONEncodable-Protocol.h>

@class NSData, NSString;

@interface KVDatasetInfo : NSObject <KVJSONEncodable, KVJSONDecodable>
{
    const struct DatasetInfo *_datasetInfo;	// 8 = 0x8
    NSData *_buffer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004fd3
@property(readonly, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDatasetInfo:(id)arg1;	// IMP=0x0000000000004f48
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004ecc
- (id)initFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004c1c
- (id)JSONWithIndent:(unsigned char)arg1;	// IMP=0x0000000000004838
@property(readonly, copy) NSString *description;
- (unsigned int)itemCount;	// IMP=0x00000000000047f9
- (id)capturedTime;	// IMP=0x0000000000004778
- (id)lastModifiedTime;	// IMP=0x00000000000046f7
- (id)userId;	// IMP=0x0000000000004670
- (id)deviceId;	// IMP=0x00000000000045e9
- (id)originAppId;	// IMP=0x0000000000004562
- (long long)itemType;	// IMP=0x0000000000004534
- (id)initWithBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003fa6
- (id)initWithSizePrefixedBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003d6a
- (id)initWithItemType:(long long)arg1 originAppId:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 lastModifiedTime:(id)arg5 capturedTime:(id)arg6 itemCount:(unsigned int)arg7 error:(id *)arg8;	// IMP=0x000000000000390a
- (id)initWithItemType:(long long)arg1 originAppId:(id)arg2 userId:(id)arg3 itemCount:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x00000000000038d1
- (id)initWithItemType:(long long)arg1 originAppId:(id)arg2 itemCount:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x000000000000389f
- (id)init;	// IMP=0x000000000000383b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

