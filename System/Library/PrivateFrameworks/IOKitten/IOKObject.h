//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IOKObject : NSObject
{
    unsigned int _object;	// 8 = 0x8
}

+ (id)bundleIdentifierForClassName:(id)arg1;	// IMP=0x00000000000032c4
+ (id)ioSuperClassNameForClassName:(id)arg1;	// IMP=0x00000000000032a1
+ (Class)classForRegistryEntry:(unsigned int)arg1;	// IMP=0x0000000000003246
@property(readonly, nonatomic) unsigned int object; // @synthesize object=_object;
- (void)dealloc;	// IMP=0x0000000000003516
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003477
- (unsigned long long)hash;	// IMP=0x0000000000003462
- (_Bool)conformsToIOClassName:(id)arg1;	// IMP=0x00000000000033f1
@property(readonly, copy, nonatomic) NSString *ioClassName;
- (id)initWithIOObject:(unsigned int)arg1;	// IMP=0x0000000000003373
- (id)init;	// IMP=0x00000000000032e7

@end

