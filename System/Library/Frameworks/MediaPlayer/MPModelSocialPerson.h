//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MPModelSocialPerson
{
}

+ (id)kind;	// IMP=0x00000000002a9583
+ (id)__artworkCatalogBlock_KEY;	// IMP=0x00000000002a9576
+ (id)__pendingRequestsCount_KEY;	// IMP=0x00000000002a9569
+ (id)__verified_KEY;	// IMP=0x00000000002a955c
+ (id)__privatePerson_KEY;	// IMP=0x00000000002a954f
+ (id)__biography_KEY;	// IMP=0x00000000002a9542
+ (id)__handle_KEY;	// IMP=0x00000000002a9535
+ (id)__uncensoredName_KEY;	// IMP=0x00000000002a9528
+ (long long)genericObjectType;	// IMP=0x00000000001e30d4
- (id)artworkCatalog;	// IMP=0x00000000002a94d0

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(copy, nonatomic) NSString *biography; // @dynamic biography;
@property(copy, nonatomic) NSString *handle; // @dynamic handle;
@property(nonatomic) long long pendingRequestsCount; // @dynamic pendingRequestsCount;
@property(nonatomic, getter=isPrivate) _Bool privatePerson; // @dynamic privatePerson;
@property(copy, nonatomic) NSString *uncensoredName; // @dynamic uncensoredName;
@property(nonatomic, getter=isVerified) _Bool verified; // @dynamic verified;

@end
