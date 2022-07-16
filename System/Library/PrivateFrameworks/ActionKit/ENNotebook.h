//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCoding-Protocol.h>

@class EDAMLinkedNotebook, EDAMNotebook, EDAMSharedNotebook, NSString;

@interface ENNotebook : NSObject <NSCoding>
{
    _Bool _isShared;	// 8 = 0x8
    _Bool _isDefaultNotebookOverride;	// 9 = 0x9
    EDAMNotebook *_notebook;	// 16 = 0x10
    EDAMLinkedNotebook *_linkedNotebook;	// 24 = 0x18
    EDAMSharedNotebook *_sharedNotebook;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002b8f8b
@property(nonatomic) _Bool isDefaultNotebookOverride; // @synthesize isDefaultNotebookOverride=_isDefaultNotebookOverride;
@property(nonatomic) _Bool isShared; // @synthesize isShared=_isShared;
@property(retain, nonatomic) EDAMSharedNotebook *sharedNotebook; // @synthesize sharedNotebook=_sharedNotebook;
@property(retain, nonatomic) EDAMLinkedNotebook *linkedNotebook; // @synthesize linkedNotebook=_linkedNotebook;
@property(retain, nonatomic) EDAMNotebook *notebook; // @synthesize notebook=_notebook;
- (unsigned long long)hash;	// IMP=0x00000000002b8edb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b8e26
- (id)description;	// IMP=0x00000000002b8ca7
@property(readonly, nonatomic) _Bool allowsWriting;
@property(readonly, nonatomic) _Bool isDefaultNotebook;
@property(readonly, nonatomic) _Bool isOwnedByUser;
@property(readonly, nonatomic) _Bool isBusinessNotebook;
@property(readonly, nonatomic) _Bool isOwnPublic;
@property(readonly, nonatomic) _Bool isJoinedPublic;
@property(readonly, nonatomic) _Bool isPublic;
- (_Bool)isLinked;	// IMP=0x00000000002b8718
@property(readonly, nonatomic) _Bool isJoinedShared;
@property(readonly, nonatomic) _Bool isOwnShared;
- (id)guid;	// IMP=0x00000000002b856a
@property(readonly, nonatomic) NSString *ownerDisplayName;
@property(readonly, nonatomic) NSString *name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002b81ed
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002b8012
- (id)initWithNotebook:(id)arg1 linkedNotebook:(id)arg2 sharedNotebook:(id)arg3;	// IMP=0x00000000002b7f4b
- (id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2 withBusinessNotebook:(id)arg3;	// IMP=0x00000000002b7f30
- (id)initWithPublicNotebook:(id)arg1 forLinkedNotebook:(id)arg2;	// IMP=0x00000000002b7f1b
- (id)initWithSharedNotebook:(id)arg1 forLinkedNotebook:(id)arg2;	// IMP=0x00000000002b7f04
- (id)initWithNotebook:(id)arg1;	// IMP=0x00000000002b7eed

@end

