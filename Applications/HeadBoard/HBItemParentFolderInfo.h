//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface HBItemParentFolderInfo : NSObject
{
    NSString *_parentFolderIdentifier;	// 8 = 0x8
    NSNumber *_parentFolderLevel;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000cc9d
- (void).cxx_destruct;	// IMP=0x002000000000ccd9
@property(retain, nonatomic) NSNumber *parentFolderLevel; // @synthesize parentFolderLevel=_parentFolderLevel;
@property(copy, nonatomic) NSString *parentFolderIdentifier; // @synthesize parentFolderIdentifier=_parentFolderIdentifier;
- (id)description;	// IMP=0x001000000000cbc9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000cb54
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000ca8b

@end
