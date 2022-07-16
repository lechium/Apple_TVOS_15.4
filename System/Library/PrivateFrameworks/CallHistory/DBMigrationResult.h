//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DBMigrationResult : NSObject
{
    long long _errorCode;	// 8 = 0x8
    long long _dbVersion;	// 16 = 0x10
}

@property(nonatomic) long long dbVersion; // @synthesize dbVersion=_dbVersion;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (id)initWithErrorCode:(long long)arg1 andDBVersion:(long long)arg2;	// IMP=0x000000000001d168

@end
