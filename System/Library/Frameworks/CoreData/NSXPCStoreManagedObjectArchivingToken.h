//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface NSXPCStoreManagedObjectArchivingToken : NSObject <NSCoding, NSSecureCoding>
{
    NSURL *_managedObjectReferenceURI;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011531
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001184e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000115f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000115d6
- (void)dealloc;	// IMP=0x0000000000011593
- (id)URI;	// IMP=0x0000000000011589
- (id)initWithURI:(id)arg1;	// IMP=0x0000000000011539

@end

