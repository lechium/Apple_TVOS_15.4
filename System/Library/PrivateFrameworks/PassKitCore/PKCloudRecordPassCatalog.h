//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCatalog;

@interface PKCloudRecordPassCatalog
{
    PKCatalog *_catalog;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003df600
- (void).cxx_destruct;	// IMP=0x00000000003dfade
@property(retain, nonatomic) PKCatalog *catalog; // @synthesize catalog=_catalog;
- (void)applyCloudRecordObject:(id)arg1;	// IMP=0x00000000003df9d3
- (id)_descriptionWithIncludeItem:(_Bool)arg1;	// IMP=0x00000000003df949
- (id)description;	// IMP=0x00000000003df8ba
- (id)descriptionWithItem:(_Bool)arg1;	// IMP=0x00000000003df823
- (long long)compare:(id)arg1;	// IMP=0x00000000003df720
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003df6a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003df608
- (id)item;	// IMP=0x00000000003df5eb

@end

