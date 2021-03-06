//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSortDescriptor.h>

@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor
{
    NSArray *_keyPath;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000117f95
+ (id)sortDescriptorWithKeyPath:(id)arg1 ascending:(_Bool)arg2;	// IMP=0x0000000000117ef1
- (void).cxx_destruct;	// IMP=0x0000000000117ede
@property(copy, nonatomic) NSArray *keyPath; // @synthesize keyPath=_keyPath;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000117e21
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000117d28
- (unsigned long long)hash;	// IMP=0x000000000011614b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011605b

@end

