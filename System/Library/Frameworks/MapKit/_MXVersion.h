//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MXVersion : NSObject
{
    NSArray *_components;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d90b3
@property(readonly, nonatomic) NSArray *components; // @synthesize components=_components;
- (long long)compare:(id)arg1;	// IMP=0x00000000000d8f10
- (id)initWithVersionString:(id)arg1;	// IMP=0x00000000000d8cf7
- (id)initWithComponents:(id)arg1;	// IMP=0x00000000000d8c84
- (id)init;	// IMP=0x00000000000d8c5a

@end

