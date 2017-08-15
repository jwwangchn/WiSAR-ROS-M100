
(cl:in-package :asdf)

(defsystem "flir_vue_read_cam-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "proposal_roi_msg" :depends-on ("_package_proposal_roi_msg"))
    (:file "_package_proposal_roi_msg" :depends-on ("_package"))
  ))