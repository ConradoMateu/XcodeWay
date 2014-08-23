/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "NSUserInterfaceValidations-Protocol.h"

@class IDESourceControlOperationInfo, IDESourceControlRepositoryChooserItem, NSButton, NSImage, NSImageView, NSPopUpButton, NSProgressIndicator, NSString, NSTextField, NSWindow;

@interface IDESourceControlRepositoryChooserWindowController : NSWindowController <NSUserInterfaceValidations>
{
    NSPopUpButton *_popupButton;
    NSButton *_chooseButton;
    NSTextField *_progressField;
    NSImageView *_reachabilityImage;
    NSProgressIndicator *_progressIndicator;
    IDESourceControlOperationInfo *_operationInfo;
    IDESourceControlRepositoryChooserItem *_repositoryChooserItem;
    id _continuationBlock;
    int _requestType;
    NSString *_messageText;
    NSString *_infoText;
    NSWindow *_parentWindow;
    NSImage *_successImage;
    id <DVTInvalidation> _operationToken;
    BOOL _inProgress;
}

- (void)beginSheetForWindow:(id)arg1;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)choose:(id)arg1;
@property(copy) id continuationBlock; // @synthesize continuationBlock=_continuationBlock;
- (void)displayError:(id)arg1;
- (void)displayErrorAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displayErrorAndCancel:(id)arg1;
- (void)endSheet;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(copy) NSString *infoText; // @synthesize infoText=_infoText;
@property(copy) NSString *messageText; // @synthesize messageText=_messageText;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property IDESourceControlOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property IDESourceControlRepositoryChooserItem *repositoryChooserItem; // @synthesize repositoryChooserItem=_repositoryChooserItem;
- (void)repositoryChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
@property int requestType; // @synthesize requestType=_requestType;
- (void)selectRepository:(id)arg1;
- (id)stringForReachabilityState;
- (id)successImage;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)windowNibName;

@end
