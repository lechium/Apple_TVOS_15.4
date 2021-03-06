//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol PHAJobTimeHandlerProtocol <NSObject>
- (_Bool)completedJobTodayForKey:(NSString *)arg1;
- (_Bool)didExceedTimeInterval:(double)arg1 forKey:(NSString *)arg2;
- (void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(NSString *)arg2;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(NSDictionary *)arg1 keysToRemove:(NSArray *)arg2;
- (NSDictionary *)libraryScopedWorkerPreferences;
@end

