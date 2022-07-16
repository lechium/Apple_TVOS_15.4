//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TRIPBOneofDescriptor : NSObject
{
    const char *name_;	// 8 = 0x8
    NSArray *fields_;	// 16 = 0x10
    SEL caseSel_;	// 24 = 0x18
}

@property(readonly, nonatomic) NSArray *fields; // @synthesize fields=fields_;
- (id)fieldWithName:(id)arg1;	// IMP=0x000000000001a111
- (id)fieldWithNumber:(unsigned int)arg1;	// IMP=0x000000000001a015
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;	// IMP=0x0000000000019fba
- (id)initWithName:(const char *)arg1 fields:(id)arg2;	// IMP=0x0000000000019ce8

@end
