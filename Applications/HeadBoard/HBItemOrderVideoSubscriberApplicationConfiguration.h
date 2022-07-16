//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HBItemOrderVideoSubscriberApplicationConfiguration : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    unsigned long long _insertionIndex;	// 16 = 0x10
}

+ (id)configurationWithApplicationIdentifier:(id)arg1 insertionIndex:(unsigned long long)arg2;	// IMP=0x004000000002f1a6
- (void).cxx_destruct;	// IMP=0x002000000002f2bb
@property(nonatomic) unsigned long long insertionIndex; // @synthesize insertionIndex=_insertionIndex;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)initWithApplicationIdentifier:(id)arg1 insertionIndex:(unsigned long long)arg2;	// IMP=0x000000000002f207

@end

