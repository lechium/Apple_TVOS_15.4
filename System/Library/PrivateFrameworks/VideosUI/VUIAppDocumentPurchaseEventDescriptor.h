//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentPurchaseEventDescriptor
{
    NSString *_canonicalID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000133e85
@property(copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (id)description;	// IMP=0x0000000000133d1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000133bc3
- (unsigned long long)hash;	// IMP=0x0000000000133b61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000133b56
- (id)initWithCanonicalID:(id)arg1;	// IMP=0x0000000000133ad7
- (id)initWithEventType:(unsigned long long)arg1;	// IMP=0x0000000000133a68

@end

