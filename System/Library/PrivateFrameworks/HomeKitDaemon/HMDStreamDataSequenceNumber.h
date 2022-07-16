//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface HMDStreamDataSequenceNumber : HMFObject <NSCopying>
{
    unsigned long long _value;	// 8 = 0x8
}

@property(readonly) unsigned long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002536fb
- (unsigned long long)hash;	// IMP=0x00000000002536e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000253647
@property(readonly, getter=isInitial) _Bool initial;
- (id)attributeDescriptions;	// IMP=0x000000000025354a
- (id)initWithStreamDataDictionary:(id)arg1;	// IMP=0x0000000000253301
- (id)initWithValue:(unsigned long long)arg1;	// IMP=0x00000000002532bd

@end

