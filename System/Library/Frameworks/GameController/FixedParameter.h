//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FixedParameter : NSObject
{
    int _identifier;	// 8 = 0x8
    float _value;	// 12 = 0xc
}

@property(readonly, nonatomic) float value; // @synthesize value=_value;
@property(readonly, nonatomic) int identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000000008ff56
- (id)initWithIdentifier:(int)arg1 value:(float)arg2;	// IMP=0x000000000008ff0c

@end

