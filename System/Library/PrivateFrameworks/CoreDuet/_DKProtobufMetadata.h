//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKProtobufConverting-Protocol.h>

@class NSDictionary, NSString;

@interface _DKProtobufMetadata : NSObject <_DKProtobufConverting>
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

+ (id)createFromData:(id)arg1;	// IMP=0x00000000001757d8
+ (id)fromPBCodable:(id)arg1;	// IMP=0x00000000000b52c9
- (void).cxx_destruct;	// IMP=0x00000000001758b4
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)asData;	// IMP=0x000000000017585a
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000017576d
- (id)toPBCodable;	// IMP=0x00000000000b4f9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
