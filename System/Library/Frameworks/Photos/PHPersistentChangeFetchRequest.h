//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPersistentChangeToken;

@interface PHPersistentChangeFetchRequest : NSObject
{
    PHPersistentChangeToken *_token;	// 8 = 0x8
    unsigned long long _maximumChangeThreshold;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014934b
@property(nonatomic) unsigned long long maximumChangeThreshold; // @synthesize maximumChangeThreshold=_maximumChangeThreshold;
@property(copy, nonatomic) PHPersistentChangeToken *token; // @synthesize token=_token;

@end
