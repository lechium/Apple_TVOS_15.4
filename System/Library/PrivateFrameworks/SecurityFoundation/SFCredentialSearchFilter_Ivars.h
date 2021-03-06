//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;
@protocol _SFServiceIdentifier;

@interface SFCredentialSearchFilter_Ivars : NSObject
{
    NSDate *minimumCreationDate;	// 8 = 0x8
    NSDate *maximumCreationDate;	// 16 = 0x10
    NSDate *minimumModificationDate;	// 24 = 0x18
    NSDate *maximumModificationDate;	// 32 = 0x20
    NSArray<_SFServiceIdentifier> *serviceIdentifiers;	// 40 = 0x28
    NSArray *usernames;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000005f40

@end

