//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NEPathEvent : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015060e
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 bundleID:(id)arg2;	// IMP=0x000000000015057a

@end

