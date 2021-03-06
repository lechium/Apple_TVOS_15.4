//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGConfigurationSource-Protocol.h>

@class NSString, NSUserDefaults;

@interface PGUserDefaultsConfigurationSource : NSObject <PGConfigurationSource>
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004b1f04
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (id)objectForKey:(id)arg1;	// IMP=0x00000000004b1ed3
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x00000000004b1e68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

