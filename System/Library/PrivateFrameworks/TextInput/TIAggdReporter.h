//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/TIAggdReporting-Protocol.h>

@class NSString;

@interface TIAggdReporter : NSObject <TIAggdReporting>
{
}

+ (id)getDefaultSoftwareLayout;	// IMP=0x0000000000010d86
+ (id)singletonInstance;	// IMP=0x0000000000010d56
+ (id)sharedAggdReporter;	// IMP=0x0000000000010d19
+ (void)setSharedAggdReporter:(id)arg1;	// IMP=0x0000000000010e01
- (void)pushValue:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000000010d13
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;	// IMP=0x0000000000010d0d
- (void)clearDistributionKey:(id)arg1;	// IMP=0x0000000000010d07
- (void)decrementKey:(id)arg1;	// IMP=0x0000000000010d01
- (void)incrementKey:(id)arg1;	// IMP=0x0000000000010cfb
- (void)subtractValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000010cf5
- (void)addValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000010cef
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;	// IMP=0x0000000000010ce9
- (void)clearScalarKey:(id)arg1;	// IMP=0x0000000000010ce3
- (int)commit;	// IMP=0x0000000000010cdb
- (void)significantTimeChanged;	// IMP=0x0000000000010cd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

