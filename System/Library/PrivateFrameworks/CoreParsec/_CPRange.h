//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPRange-Protocol.h>

@class NSData, NSString;

@interface _CPRange : PBCodable <_CPRange, NSSecureCoding>
{
    unsigned long long _location;	// 8 = 0x8
    unsigned long long _length;	// 16 = 0x10
}

@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) unsigned long long location; // @synthesize location=_location;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000064bab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000064b2e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000064b21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end
