//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

@interface VSReverseValueTransformer : NSValueTransformer
{
    NSValueTransformer *_valueTransformer;	// 8 = 0x8
}

+ (id)reverseValueTransformerWithValueTransformer:(id)arg1;	// IMP=0x0000000000064636
- (void).cxx_destruct;	// IMP=0x0000000000064bfa
@property(retain, nonatomic) NSValueTransformer *valueTransformer; // @synthesize valueTransformer=_valueTransformer;
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x0000000000064b52
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000064acf
- (id)initWithValueTransformer:(id)arg1;	// IMP=0x0000000000064a61
- (id)init;	// IMP=0x00000000000649f2

@end

