//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface LSDocumentProxy <NSSecureCoding>
{
    CDStruct_4c969caf _sourceAuditToken;	// 8 = 0x8
    _Bool _isContentManaged;	// 40 = 0x28
    NSURL *_URL;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    NSString *_typeIdentifier;	// 64 = 0x40
    NSString *_MIMEType;	// 72 = 0x48
}

+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(_Bool)arg4;	// IMP=0x00000000000ae846
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const CDStruct_4c969caf *)arg4;	// IMP=0x00000000000ae824
+ (id)documentProxyForURL:(id)arg1 sourceIsManaged:(_Bool)arg2;	// IMP=0x00000000000ae802
+ (id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x00000000000ae7e0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000adee1
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;	// IMP=0x00000000000ad5ce
+ (id)documentProxyForURL:(id)arg1;	// IMP=0x00000000000ad4e2
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(_Bool)arg4 sourceAuditToken:(const CDStruct_4c969caf *)arg5;	// IMP=0x00000000000ad411
+ (id)documentProxyForURL:(id)arg1 isContentManaged:(_Bool)arg2 sourceAuditToken:(const CDStruct_4c969caf *)arg3;	// IMP=0x00000000000ad31e
- (void).cxx_destruct;	// IMP=0x00000000000ae8dc
@property(readonly, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic, getter=isContentManaged) _Bool contentManaged; // @synthesize contentManaged=_isContentManaged;
@property(readonly, nonatomic) const CDStruct_4c969caf *managedSourceAuditToken;
@property(readonly, nonatomic) _Bool sourceIsManaged;
- (id)debugDescription;	// IMP=0x00000000000ae638
- (id)description;	// IMP=0x00000000000ae545
- (id)uniqueIdentifier;	// IMP=0x00000000000ae30c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ae1aa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000adee9
- (id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id *)arg1;	// IMP=0x00000000000adebd
- (id)applicationsAvailableForOpeningFromAirDropWithError:(id *)arg1;	// IMP=0x00000000000ade99
- (id)applicationsAvailableForOpeningWithError:(id *)arg1;	// IMP=0x00000000000ade78
- (id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ad8fc
- (id)availableClaimBindingsForMode:(unsigned char)arg1 handlerRank:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ad8c4
- (id)availableClaimBindingsForMode:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x00000000000ad899
- (id)availableClaimBindingsReturningError:(id *)arg1;	// IMP=0x00000000000ad86c
@property(readonly, nonatomic) const CDStruct_4c969caf *sourceAuditToken; // @dynamic sourceAuditToken;
@property(readonly, nonatomic) NSString *containerOwnerApplicationIdentifier;
@property(readonly, getter=isImageOrVideo) _Bool imageOrVideo;
- (id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(_Bool)arg5 sourceAuditToken:(const CDStruct_4c969caf *)arg6;	// IMP=0x00000000000ad693
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;	// IMP=0x00000000000af390
- (id)claimBindingsAvailableForOpeningWithStyle:(unsigned char)arg1 handlerRank:(id)arg2 limit:(unsigned long long)arg3 XPCConnection:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000af356
- (id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg1 limit:(unsigned long long)arg2 XPCConnection:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000af31d
- (id)applicationsOrClaimBindings:(_Bool)arg1 availableForOpeningWithStyle:(unsigned char)arg2 handlerRank:(id)arg3 limit:(unsigned long long)arg4 XPCConnection:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000aedad
- (optional_c4aaf08f)_bindingEvaluatorWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x00000000000ae92f

@end
