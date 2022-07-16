//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSortDescriptor.h>

@class NSDictionary;

@interface MPMultiSortDescriptor : NSSortDescriptor
{
    NSDictionary *_relatedProperties;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011820a
+ (id)sortDescriptorWithRelatedProperties:(id)arg1 ascending:(_Bool)arg2;	// IMP=0x0000000000118166
- (void).cxx_destruct;	// IMP=0x0000000000118153
@property(copy, nonatomic) NSDictionary *relatedProperties; // @synthesize relatedProperties=_relatedProperties;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000118096
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000117f9d

@end
