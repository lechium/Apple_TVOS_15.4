//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SinfsArray : NSObject
{
    NSArray *_sinfs;	// 8 = 0x8
}

- (_Bool)_isRecognizedProperty:(id)arg1;	// IMP=0x002000000002a54f
- (id)_copyValueForSINF:(id)arg1 property:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002a4d4
@property(readonly) NSArray *sinfs;
- (id)copyValueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002a2e2
- (id)copyValueForField:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000002a214
- (void)dealloc;	// IMP=0x001000000002a1d9
- (id)initWithSINFs:(id)arg1;	// IMP=0x001000000002a11a
- (id)init;	// IMP=0x001000000002a106

@end

