//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/NSSecureCoding-Protocol.h>

@class _CDContextValue, _CDContextualKeyPath;

@interface _CDContextualKeyPathAndValue : NSObject <NSSecureCoding>
{
    _CDContextualKeyPath *_keyPath;	// 8 = 0x8
    _CDContextValue *_value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001fee
- (void).cxx_destruct;	// IMP=0x000000000000217f
@property(retain, nonatomic) _CDContextValue *value; // @synthesize value=_value;
@property(retain, nonatomic) _CDContextualKeyPath *keyPath; // @synthesize keyPath=_keyPath;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002064
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001ff6
- (id)initWithKeyPath:(id)arg1 andValue:(id)arg2;	// IMP=0x0000000000001f55

@end

