//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PBSMigrator : NSObject
{
    NSMutableArray *_allMigrations;	// 8 = 0x8
}

+ (id)_contextForCurrentOS;	// IMP=0x00000000000a9770
+ (void)_resetMigrator;	// IMP=0x00000000000a9740
+ (_Bool)_performMigrationWithContext:(id)arg1;	// IMP=0x00000000000a91d0
+ (_Bool)performMigrationIfNeeded;	// IMP=0x00000000000a9160
+ (void)registerMigration:(id)arg1;	// IMP=0x00000000000a9080
- (void).cxx_destruct;	// IMP=0x00000000000aa050
@property(readonly, nonatomic) NSMutableArray *allMigrations; // @synthesize allMigrations=_allMigrations;
- (void)_performMigrationsWithContext:(id)arg1;	// IMP=0x00000000000a9a10
- (id)_init;	// IMP=0x00000000000a8fd0
- (id)init;	// IMP=0x00000000000a8fa0

@end
