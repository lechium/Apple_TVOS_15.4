//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NEIKEv2VendorIDPayload
{
    NSData *_vendorData;	// 24 = 0x18
}

+ (id)copyTypeDescription;	// IMP=0x00000000000dccdd
- (void).cxx_destruct;	// IMP=0x00000000000dcfea
@property(retain) NSData *vendorData; // @synthesize vendorData=_vendorData;
- (_Bool)parsePayloadData;	// IMP=0x00000000000dcf02
- (_Bool)generatePayloadData;	// IMP=0x00000000000dce19
- (_Bool)hasRequiredFields;	// IMP=0x00000000000dcde6
- (id)description;	// IMP=0x00000000000dcdcd
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000dccf5
- (unsigned long long)type;	// IMP=0x00000000000dccea

@end
