//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface PSIQueryPlaceToken
{
    NSDictionary *_locationNameByCategory;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000459572
- (void).cxx_destruct;	// IMP=0x00000000004594a3
- (id)parentToken;	// IMP=0x000000000045932c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004592af
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004591a3
- (id)initWithText:(id)arg1 locationNameByCategory:(id)arg2;	// IMP=0x0000000000459114

@end

