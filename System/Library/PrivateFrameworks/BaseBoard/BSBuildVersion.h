//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSBuildVersion : NSObject
{
    NSString *_stringRepresentation;	// 8 = 0x8
    long long _majorBuildNumber;	// 16 = 0x10
    NSString *_majorBuildLetterString;	// 24 = 0x18
    long long _minorBuildNumber;	// 32 = 0x20
    NSString *_minorBuildLetterString;	// 40 = 0x28
}

+ (id)fromString:(id)arg1;	// IMP=0x00000000000672a9
- (void).cxx_destruct;	// IMP=0x0000000000067f1f
@property(readonly, copy, nonatomic) NSString *minorBuildLetterString; // @synthesize minorBuildLetterString=_minorBuildLetterString;
@property(readonly, nonatomic) long long minorBuildNumber; // @synthesize minorBuildNumber=_minorBuildNumber;
@property(readonly, copy, nonatomic) NSString *majorBuildLetterString; // @synthesize majorBuildLetterString=_majorBuildLetterString;
@property(readonly, nonatomic) long long majorBuildNumber; // @synthesize majorBuildNumber=_majorBuildNumber;
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
- (id)description;	// IMP=0x0000000000067dde
- (long long)_compareAgainstBuildVersion:(id)arg1 withPrecision:(long long)arg2;	// IMP=0x0000000000067baa
- (_Bool)isAfter:(id)arg1 withPrecision:(long long)arg2;	// IMP=0x0000000000067b90
- (_Bool)isAfter:(id)arg1;	// IMP=0x0000000000067b7c
- (_Bool)isBefore:(id)arg1 withPrecision:(long long)arg2;	// IMP=0x0000000000067b62
- (_Bool)isBefore:(id)arg1;	// IMP=0x0000000000067b4e
- (_Bool)isSameAs:(id)arg1 withPrecision:(long long)arg2;	// IMP=0x0000000000067b35
- (_Bool)isSameAs:(id)arg1;	// IMP=0x0000000000067b21
- (unsigned long long)hash;	// IMP=0x0000000000067a31
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006796f
- (id)initWithString:(id)arg1;	// IMP=0x0000000000067496
- (id)init;	// IMP=0x0000000000067307

@end

