//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSMutableDictionary;

@interface TIEventDescriptorRegistry : NSObject
{
    NSMutableDictionary *_eventDescriptors;	// 8 = 0x8
    NSMutableDictionary *_eventSpecs;	// 16 = 0x10
    NSLock *_lock;	// 24 = 0x18
    _Bool _loaded;	// 32 = 0x20
    NSDictionary *_config;	// 40 = 0x28
}

+ (id)registryWithDescriptors:(id)arg1 andSpecs:(id)arg2;	// IMP=0x0000000000108f6b
+ (id)registryWithConfig:(id)arg1;	// IMP=0x0000000000108f1e
+ (id)registry;	// IMP=0x0000000000108ef3
- (void).cxx_destruct;	// IMP=0x0000000000108c61
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (id)valueFromError:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000108b0d
- (id)contextFromError:(id)arg1;	// IMP=0x0000000000108a19
- (void)_loadEventDescriptors;	// IMP=0x0000000000108561
- (void)loadEventDescriptorsIfNecessary;	// IMP=0x0000000000108516
@property(readonly, nonatomic) NSDictionary *eventSpecs;
@property(readonly, nonatomic) NSDictionary *eventDescriptors;
- (id)eventSpecWithName:(id)arg1;	// IMP=0x0000000000108449
- (id)eventDescriptorWithName:(id)arg1;	// IMP=0x00000000001083c6
- (id)allEventDescriptors;	// IMP=0x0000000000108376
- (id)initWithDescriptors:(id)arg1 andSpecs:(id)arg2;	// IMP=0x0000000000108278
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000001081bd

@end
