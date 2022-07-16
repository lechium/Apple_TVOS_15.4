//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MRPasscodeCredentials : NSObject
{
    unsigned int _type;	// 8 = 0x8
    unsigned long long _characterCount;	// 16 = 0x10
    NSString *_passcode;	// 24 = 0x18
}

+ (id)standardCredentials;	// IMP=0x000000000025f000
- (void).cxx_destruct;	// IMP=0x000000000025f1a0
@property(copy, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(nonatomic) unsigned long long characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

